struct EMF_dc_state
{
INT mode;
XFORM world_transform;
INT wndOrgX;
INT wndOrgY;
INT wndExtX;
INT wndExtY;
INT vportOrgX;
INT vportOrgY;
INT vportExtX;
INT vportExtY;
EMF_dc_state *next;
};
