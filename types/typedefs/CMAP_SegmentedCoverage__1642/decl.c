struct CMAP_SegmentedCoverage
{
WORD format;
WORD reserved;
DWORD length;
DWORD language;
DWORD nGroups;
CMAP_SegmentedCoverage_group groups[1];
};
