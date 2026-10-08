// BSTreeNode runtime update override: if SpeedTree enabled/visible, calls vtbl+0xE0 contact update then base update-downward path.
void __thiscall sub_563EB0(float *this, float a2, int a3)
{
  if ( bEnableTrees_SpeedTree ) /*0x563eb0*/
  {
    if ( *(_BYTE *)(BSTreeManager_GetInstance(1) + 0x20) ) /*0x563ec6*/
    {
      if ( a2 <= 0.0 || sub_47F7B0(this, unk_B39E00) ) /*0x563ee0*/
      {
        (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 0xE0))(this, LODWORD(a2)); /*0x563efe*/
        NiNode_UpdateDownwardPass(this, a2, a3); /*0x563f0f*/
      }
    }
  }
}
