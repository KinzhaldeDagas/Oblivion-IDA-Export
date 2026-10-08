struct EMRPOLYPOLYLINE16
{
EMR emr;
RECTL rclBounds;
DWORD nPolys;
DWORD cpts;
DWORD aPolyCounts[1];
POINTS apts[1];
};
