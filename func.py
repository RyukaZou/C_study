import math

def distance(x1, y1, x2, y2):
    print(x1, y1, x2 y2)
    return ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)) ** 0.5

def angle(x1, y1, x2, y2):
    L1 = ((x2-x1)*(x2-x1))**0.5 # 鄰邊
    L2 = ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)) ** 0.5 # 對邊
    theta = 2.*math.pi / 360. * math.acos(L1/L2)
    theta = 360. / (2. * math.pi) * math.acos(L1/L2)
    return theta

def direction(x1, y1, x2, y2):
    x_direction = abs(x1 - x2) # abs() 絕對值
    y_direction = abs(y1 - y2)
    if x_direction > y_direction:
        return 'vertical'
    else:
        return 'horizental'


if __name__ == '__main__':
    x1 = 0
    y1 = 0
    x2 = 3
    y2 = 4
    print(distance(x1, y1, x2, y2))
    print(angle(x1, y1, x2, y2))
    print(direction(x1, y1, x2, y2))
