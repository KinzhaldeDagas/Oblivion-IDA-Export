NiObject *__cdecl sub_5508F0(int a1, int a2)
{
  NiObject *result; // eax
  int v3; // ebp
  NiObjectVtbl **v4; // esi
  unsigned int v5; // edi
  int v6; // ebx

  result = sub_5508A0(a1);
  if ( result )
  {
    if ( *(_DWORD *)a2 )
    {
      v3 = *(_DWORD *)(a2 + 4);
      v4 = *(NiObjectVtbl ***)a2;
      v5 = 0;
      for ( result = result->__vftable[1].Unk_02(result);
            v5 < *(unsigned __int16 *)(*(_DWORD *)(a1 + 0xB4) + 8);
            result = (NiObject *)((char *)result + 0xC) )
      {
        *v4 = result->__vftable;
        v4[1] = (NiObjectVtbl *)result->members.m_uiRefCount;
        v4[2] = result[1].__vftable;
        ++v5;
        v4 = (NiObjectVtbl **)((char *)v4 + v3);
      }
      v6 = *(_DWORD *)(a1 + 0xB4);
      if ( *(_DWORD *)(v6 + 0x1C) )
        *(_WORD *)(v6 + 0x2E) |= 1u;
    }
  }
  return result;
}
