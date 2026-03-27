int __userpurge MiddleHighProc_HasShieldType_::EffectLoop@<eax>(int a1@<edi>, _DWORD *a2@<esi>, int a3, int a4)
{
  do
  {
    if ( !a2[1] && !*a2 )
      break;
    *(_DWORD *)(a1 + 0x164) |= Magic_GetShieldType(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*a2 + 0xC) + 0x1C) + 0x98));
    a2 = (_DWORD *)a2[1];
  }
  while ( a2 );
  *(_BYTE *)(a1 + 0x161) = 0;
  return MiddleHighProc_HasShieldType_::Done(a3, a4);
}
