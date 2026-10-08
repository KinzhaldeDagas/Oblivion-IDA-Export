// BSTreeNode runtime update override: if SpeedTree enabled/visible, calls vtbl+0xE0 contact update then base update path.
void __thiscall sub_563F20(float *this, float a2)
{
  if ( bEnableTrees_SpeedTree ) /*0x563f20*/
  {
    if ( *(_BYTE *)(BSTreeManager_GetInstance(1) + 0x20) ) /*0x563f36*/
    {
      if ( a2 <= 0.0 || sub_47F7B0(this, unk_B39E00) ) /*0x563f50*/
      {
        (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 0xE0))(this, LODWORD(a2)); /*0x563f6e*/
        sub_70A190((int)this, a2); /*0x563f7a*/
      }
    }
  }
}
