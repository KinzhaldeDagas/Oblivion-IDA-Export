int __usercall MagicCaster_FindTouchTarget_::CalcHandReach@<eax>(
        int a1@<ebp>,
        int a2@<esi>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        float a7,
        int a8,
        float a9)
{
  int v10; // eax
  float v11; // [esp+1Ch] [ebp+1Ch]

  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x26C))(a1);
  v11 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 0xEC))(a1) * a3;
  if ( a1 )
    return MagicCaster_FindTouchTarget_::CalcDistToPlayer__(a4, a5, a1, a7, a8, a9, v11);
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x20))(a2);
  return MagicCaster_FindTouchTarget_::CalcDistToPlayer__(a4, a5, v10, a7, a8, a9, v11);
}
