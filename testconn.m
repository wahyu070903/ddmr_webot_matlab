u = udpport("datagram", "LocalPort", 25001);
disp("Listening on UDP port 25001...");

while true
    if u.NumDatagramsAvailable > 0
        data = read(u, u.NumDatagramsAvailable, "string");
        disp("Received:");
        disp(data);
    end
    pause(0.1); % small delay to prevent CPU overload
end
