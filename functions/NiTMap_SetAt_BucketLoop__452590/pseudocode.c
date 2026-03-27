int __userpurge NiTMap_SetAt_::BucketLoop@<eax>(int a1@<esi>, int a2@<ebx>, _DWORD *a3@<edi>, int a4, int a5)
{
  while ( !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, a2, a3[1]) )
  {
    a3 = (_DWORD *)*a3;
    if ( !a3 )
      return NiTMap_SetAt_::InsertNode(a4, a5);
  }
  return NiTMap_SetAt_::Done(a1, a4, a5);
}
