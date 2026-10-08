// SpeedTreeBranchShader load dispatch virtual +0x8C. Calls inherited thunk +0xA8, which loads branch 1x vertex/pixel programs through +0xAC/+0xB0; ShaderPackage>=2 also calls inherited +0xC4/+0xC8 loaders.
int __thiscall sub_80EFF0(void *this)
{
  int result; // eax

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0xA8))(this); /*0x80effb*/
  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xC4))(this); /*0x80f007*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x80f010*/
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xC8))(this); /*0x80f01d*/
  return result; /*0x80f01f*/
}
