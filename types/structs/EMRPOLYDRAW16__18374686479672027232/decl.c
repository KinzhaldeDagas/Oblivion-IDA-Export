struct __declspec(align(4)) EMRPOLYDRAW16
{
EMR emr;
RECTL rclBounds;
DWORD cpts;
POINTS apts[1];
BYTE abTypes[1];
};
