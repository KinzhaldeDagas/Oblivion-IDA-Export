void __thiscall sub_6EC910(float *this, _DWORD *a2, int *a3)
{
  int v4; // ecx
  int v5; // eax

  NiTimeController_CopyMembers(this, (int)a2, a3); /*0x6ec91f*/
  v4 = *((_DWORD *)this + 0x10); /*0x6ec924*/
  if ( v4 ) /*0x6ec929*/
  {
    v5 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v4 + 0x18))(v4, a3); /*0x6ec931*/
    sub_6EC7C0(a2, v5); /*0x6ec936*/
  }
}
