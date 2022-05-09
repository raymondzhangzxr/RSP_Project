// https://github.com/tpepels/turtlebot_slam
// https://cw.fel.cvut.cz/b182/_media/courses/aro/tutorials/04_exploration.pdf
#include <cstdlib>  // Needed for rand()
#include <ctime>
#include <map>
#include <queue>
#include <vector>

#include "nav_msgs/OccupancyGrid.h"
#include "ros/ros.h"
void get_neighbours(int n_array[], int position, int map_width);
nav_msgs::OccupancyGrid downSizeMap(const nav_msgs::OccupancyGrid& map,
                                    int width, int height);
bool is_frontier_point(const nav_msgs::OccupancyGrid& map, int point,
                       int map_size, int map_width);
int get_row_from_offset(int offset, int width);
int get_column_from_offset(int offset, int width);
// wavefront frontier detection
std::vector<std::vector<int> > wfd(const nav_msgs::OccupancyGrid& map,
                                   int map_height, int map_width, int pose);