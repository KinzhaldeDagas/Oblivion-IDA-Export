struct __declspec(align(4)) EMRINVERTRGN
{
EMR emr;
RECTL rclBounds;
DWORD cbRgnData;
BYTE RgnData[1];
};
