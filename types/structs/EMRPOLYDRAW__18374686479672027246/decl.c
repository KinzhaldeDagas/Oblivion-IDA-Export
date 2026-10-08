struct __declspec(align(4)) EMRPOLYDRAW
{
EMR emr;
RECTL rclBounds;
DWORD cptl;
POINTL aptl[1];
BYTE abTypes[1];
};
