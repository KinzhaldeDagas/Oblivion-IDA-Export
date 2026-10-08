struct EMRPOLYPOLYLINE
{
EMR emr;
RECTL rclBounds;
DWORD nPolys;
DWORD cptl;
DWORD aPolyCounts[1];
POINTL aptl[1];
};
