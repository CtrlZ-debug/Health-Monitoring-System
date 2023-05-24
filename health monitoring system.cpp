#include <iostream>
#include <string>

// Function to send data remotely to healthcare professionals
void sendDataToHealthcare(const std::string& data)
{
    // Simulated code to send data remotely
    std::cout << "Sending data to healthcare professionals: " << data << std::endl;
}

int main()
{
    // Simulated values for blood pressure, sugar level, and heartbeat
    int bloodPressure = 150;
    float sugarLevel = 4.9;
    int heartbeat = 85;

    // Formatting the data as a string
    std::string data = "Blood Pressure: " + std::to_string(bloodPressure) +
                       ", Sugar Level: " + std::to_string(sugarLevel) +
                       ", Heartbeat: " + std::to_string(heartbeat);

    // Sending the data remotely
    sendDataToHealthcare(data);

    return 0;
}







