char __thiscall sub_650920(int *this, Actor *a2)
{
  int v4; // eax
  int v5; // ebp
  int v6; // ebx
  int v7; // eax

  v4 = (*(int (__thiscall **)(int *))(*this + 0x184))(this);
  v5 = v4;
  if ( v4 )
  {
    if ( !this[0x52] )
      (*(void (__thiscall **)(int *, Actor *))(*this + 0x558))(this, a2);
    (*(void (__thiscall **)(int *, Actor *))(*this + 0x55C))(this, a2);
    v6 = sub_566D00((char **)v5, (int)a2);
    if ( this[0x52] )
    {
      v7 = *(_DWORD *)(EffectItemList_GetStrongestItem(3, 0) + 0x10);
      if ( v7 == 2 )
      {
        Actor_CastOnTarget(a2, (void *)this[0x52], v6, 0);
        this[0x52] = 0;
      }
      else if ( v7 == 1 )
      {
        Actor_CastOnTouch(a2, (void *)this[0x52], v6);
        this[0x52] = 0;
      }
      else
      {
        (*(void (__thiscall **)(int *, Actor *))(*this + 0x54C))(this, a2);
      }
    }
    LOBYTE(v4) = sub_565DF0((_DWORD *)v5);
    if ( (_BYTE)v4 )
    {
      if ( !*(_DWORD *)(v5 + 0x30) )
        LOBYTE(v4) = (*(int (__thiscall **)(int *, Actor *, int))(*this + 0x188))(this, a2, 1);
    }
  }
  return v4;
}
