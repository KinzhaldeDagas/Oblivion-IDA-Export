// [Controller decode 2026-07-09] Sets active bhk character-controller shape type and rebuilds/reinstalls the active shape when available.
void __thiscall bhkCharacterController_SetShapeType(int ***this, int **a2)
{
  bool v3; // bl
  _DWORD *v4; // ecx
  hkVector4 *PositionPtr; // eax
  int v6; // eax
  int v7; // [esp-8h] [ebp-10h]

  if ( *(this + 0xDB) != a2 && (int)a2 < 2 ) /*0x894953*/
  {
    if ( *(this + (_DWORD)a2 + 0xDD) ) /*0x894955*/
    {
      v3 = ((unsigned int)*(this + 0x7D) & 0x8000) != 0; /*0x894969*/
      if ( ((unsigned int)*(this + 0x7D) & 0x8000) != 0 ) /*0x89496c*/
        sub_893950(this); /*0x89496e*/
      v4 = *(this + 2); /*0x894973*/
      *(this + 0xDB) = a2; /*0x894978*/
      if ( v4 ) /*0x89497e*/
        PositionPtr = (hkVector4 *)bhkCollisionWrapper_GetPositionPtr(v4); /*0x894980*/
      else
        PositionPtr = &unk_BA7A40; /*0x894987*/
      v7 = (int)PositionPtr; /*0x89498c*/
      v6 = sub_890BA0((int *)this); /*0x89498f*/
      sub_890660(this, v6, v7); /*0x894997*/
      if ( v3 ) /*0x89499f*/
        ((void (__thiscall *)(int ***, _DWORD))(*this)[0x22])(this, 0); /*0x8949ad*/
    }
  }
}
