#include <iostream>
#include <thread>
#include <chrono>


void function(int num, int i, long delay) {
   int loop = 0;
      
    while(loop < i) {  
      std::this_thread::sleep_for(std::chrono::milliseconds(delay));
      std::cout << "function: " << num << loop << " :delay " << delay << std::endl;
          loop++;
   }
}

int main() {
   char result;
   std::thread firstThread(function, 1, 100, 1000); 
   std::thread secThread(function, 2, 100, 2000);
   std::thread thirdThread(function, 3, 100, 3000);

      firstThread.join();
      secThread.join();
      thirdThread.join();
   
  
}
 