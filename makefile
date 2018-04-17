CXX = g++
RM = rm -f
CPPFLAGS = -std=c++14 -g
LDFLAGS = -g
LDLIBS = 

SRCS =  Product.cpp \
		Inventory.cpp \
		driver.cpp
			 
OBJS = $(subst .cpp,.o,$(SRCS))

all: Driver

Driver: $(OBJS) 
	$(CXX) $(LDFLAGS) -o Driver $(OBJS) $(LDLIBS) 

depend: .depend

.depend: $(SRCS)
	rm -f ./.depend
	$(CXX) $(CPPFLAGS) $(INC) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) *~ .depend

include .depend
