FROM ubuntu:latest
WORKDIR '/app'

RUN apt-get update && \
    apt-get -y install build-essential cmake libgtest-dev && \
    cd /usr/src/googletest && \
    cmake . && \
    make && \
    cp lib/*.a /usr/lib

### Running the container with copying the files
### Dockerfile needs to be build after every change
# COPY . /app
# RUN cmake .
# RUN make

# CMD ["./test_example"]