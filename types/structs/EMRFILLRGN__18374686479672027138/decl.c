struct __declspec(align(4)) EMRFILLRGN
{
EMR emr;
RECTL rclBounds;
DWORD cbRgnData;
DWORD ihBrush;
BYTE RgnData[1];
};
