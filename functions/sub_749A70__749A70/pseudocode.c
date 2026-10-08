LONG __thiscall sub_749A70(NiGeometry *this, int a2, volatile LONG *a3)
{
  volatile LONG *v3; // ebp
  int v4; // edi
  _DWORD *v6; // esi
  int v7; // ecx
  volatile LONG *v8; // eax
  volatile LONG *v9; // edi
  LONG result; // eax
  int v11; // esi
  LONG v12; // edi

  v3 = a3; /*0x749a72*/
  v4 = a2; /*0x749a78*/
  j_NiGeometry_CopyMembersForClone(this, (NiGeometry *)a2, (void *)a3); /*0x749a80*/
  *(_BYTE *)(a2 + 0xC0) = *((_BYTE *)this + 0xC0); /*0x749a8b*/
  v6 = *((_DWORD **)this + 0x32); /*0x749a91*/
  if ( v6 ) /*0x749a99*/
  {
    do /*0x749af6*/
    {
      v7 = v6[2]; /*0x749aa0*/
      v6 = (_DWORD *)*v6; /*0x749aab*/
      v8 = (volatile LONG *)(*(int (__thiscall **)(int, volatile LONG *))(*(_DWORD *)v7 + 0x18))(v7, v3); /*0x749aae*/
      v9 = v8; /*0x749ab0*/
      a3 = v8; /*0x749ab4*/
      if ( v8 ) /*0x749ab8*/
        InterlockedIncrement(v8 + 1); /*0x749abe*/
      NiTRefPointerList__AddTail((_DWORD *)(a2 + 0xC4), (int *)&a3); /*0x749ad3*/
      if ( v9 ) /*0x749ada*/
      {
        if ( !InterlockedDecrement(v9 + 1) ) /*0x749ae0*/
          (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1); /*0x749af2*/
      }
    }
    while ( v6 ); /*0x749af6*/
    v4 = a2; /*0x749af8*/
  }
  *(float *)(v4 + 0xE8) = *((float *)this + 0x3A); /*0x749b03*/
  result = ((int (__thiscall *)(NiGeometryData *, volatile LONG *))this->member.geomData->__vftable->super.Copy)( /*0x749b14*/
             this->member.geomData,
             v3);
  v11 = *(_DWORD *)(a2 + 0xB4); /*0x749b1a*/
  v12 = result; /*0x749b20*/
  if ( v11 != result ) /*0x749b24*/
  {
    if ( v11 ) /*0x749b28*/
    {
      result = InterlockedDecrement((volatile LONG *)(v11 + 4)); /*0x749b2e*/
      if ( !result ) /*0x749b36*/
        result = (**(int (__thiscall ***)(int, int))v11)(v11, 1); /*0x749b44*/
    }
    *(_DWORD *)(a2 + 0xB4) = v12; /*0x749b48*/
    if ( v12 ) /*0x749b4e*/
      return InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x749b54*/
  }
  return result; /*0x749b5a*/
}
