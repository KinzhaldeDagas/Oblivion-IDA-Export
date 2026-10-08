const void *__thiscall sub_759940(const void **this, NiGeometryData *a2, _DWORD **a3)
{
  NiGeometryData *v5; // eax
  unsigned int v6; // ebp
  NiPoint3 *v7; // ebx
  void *v8; // ebp
  void *v9; // ebx
  void *v10; // ebx
  unsigned int v11; // ebp
  void *v12; // ebx
  void *v13; // ebx
  void *v14; // ebx
  NiPoint3 *v15; // ebx
  int v16; // ebp
  NiPoint3 *v17; // eax
  NiPoint3 *v18; // ebx
  const void *result; // eax
  NiGeometryData *v20; // [esp+14h] [ebp+4h]
  int v21; // [esp+18h] [ebp+8h]

  sub_700770(this, (int)a2, a3); /*0x759950*/
  v5 = (NiGeometryData *)FormHeapAlloc(
                           (0xC * (unsigned __int64)*((unsigned __int16 *)this + 4)) >> 0x20 != 0
                         ? 0xFFFFFFFF
                         : 0xC * *((unsigned __int16 *)this + 4));
  v6 = 0xC * *((unsigned __int16 *)this + 4); /*0x75997d*/
  v20 = v5; /*0x759982*/
  memcpy(v5, *(this + 7), v6); /*0x759986*/
  v7 = 0; /*0x75998b*/
  if ( *(this + 8) )
  {
    v7 = (NiPoint3 *)FormHeapAlloc(
                       (0xC * (unsigned __int64)*((unsigned __int16 *)this + 4)) >> 0x20 != 0
                     ? 0xFFFFFFFF
                     : 0xC * *((unsigned __int16 *)this + 4));
    memcpy(v7, *(this + 8), v6); /*0x7599b7*/
  }
  v8 = 0; /*0x7599bf*/
  if ( *(this + 9) )
  {
    v21 = *((unsigned __int16 *)this + 4); /*0x7599d8*/
    v8 = (void *)FormHeapAlloc((unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v21);
    if ( v8 ) /*0x7599ed*/
      sub_401080(v8, 0x10, v21, (void *(__thiscall *)(void *))sub_47EA50); /*0x7599fc*/
    else
      v8 = 0; /*0x759a03*/
    memcpy(v8, *(this + 9), 0x10 * *((unsigned __int16 *)this + 4)); /*0x759a12*/
  }
  NiGeometryData_SetData(a2, *((_WORD *)this + 4), (NiPoint3 *)v20, v7, v8, 0, 0, 0); /*0x759a2e*/
  v9 = 0; /*0x759a33*/
  if ( *(this + 0x14) )
  {
    v9 = (void *)FormHeapAlloc(
                   (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1C != 0
                 ? 0xFFFFFFFF
                 : 0x10 * *((unsigned __int16 *)this + 4));
    memcpy(v9, *(this + 0x14), 0x10 * *((unsigned __int16 *)this + 4)); /*0x759a63*/
  }
  sub_73EF50((unsigned int *)a2, (unsigned int)v9); /*0x759a6e*/
  v10 = (void *)FormHeapAlloc(
                  (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
                ? 0xFFFFFFFF
                : 4 * *((unsigned __int16 *)this + 4));
  v11 = 4 * *((unsigned __int16 *)this + 4); /*0x759a98*/
  memcpy(v10, *(this + 0x13), v11); /*0x759a9d*/
  sub_73EF30((unsigned int *)a2, (unsigned int)v10); /*0x759aa8*/
  v12 = (void *)FormHeapAlloc(
                  (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
                ? 0xFFFFFFFF
                : 4 * *((unsigned __int16 *)this + 4));
  memcpy(v12, *(this + 0x11), v11); /*0x759acf*/
  sub_73EF10((unsigned int *)a2, (unsigned int)v12); /*0x759ada*/
  a2[1].member.m_usVertices = *((_WORD *)this + 0x24); /*0x759ae3*/
  if ( *(this + 0x15) )
  {
    v13 = (void *)FormHeapAlloc(
                    (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
                  ? 0xFFFFFFFF
                  : 4 * *((unsigned __int16 *)this + 4));
    memcpy(v13, *(this + 0x15), v11); /*0x759b0f*/
    sub_73EF70((unsigned int *)a2, (unsigned int)v13); /*0x759b1a*/
  }
  if ( *(this + 0x16) )
  {
    v14 = (void *)FormHeapAlloc(
                    (0xC * (unsigned __int64)*((unsigned __int16 *)this + 4)) >> 0x20 != 0
                  ? 0xFFFFFFFF
                  : 0xC * *((unsigned __int16 *)this + 4));
    memcpy(v14, *(this + 0x16), 0xC * *((unsigned __int16 *)this + 4)); /*0x759b52*/
    sub_73EF90((unsigned int *)a2, (unsigned int)v14); /*0x759b5d*/
  }
  v15 = 0; /*0x759b62*/
  if ( *(this + 0x17) )
  {
    v16 = *((unsigned __int16 *)this + 4); /*0x759b69*/
    v17 = (NiPoint3 *)FormHeapAlloc(
                        (0x1C * (unsigned __int64)*((unsigned __int16 *)this + 4)) >> 0x20 != 0
                      ? 0xFFFFFFFF
                      : 0x1C * v16);
    v15 = v17; /*0x759b85*/
    if ( v17 ) /*0x759b8c*/
      sub_401080(v17, 0x1C, v16, (void *(__thiscall *)(void *))sub_75F780); /*0x759b97*/
    else
      v15 = 0; /*0x759b9e*/
    memcpy(v15, *(this + 0x17), 0x1C * *((unsigned __int16 *)this + 4)); /*0x759bb7*/
  }
  FormHeapFree((unsigned int)a2[1].member.m_pkVertex); /*0x759bc3*/
  a2[1].member.m_pkVertex = v15; /*0x759bc8*/
  v18 = 0; /*0x759bcb*/
  if ( *(this + 0x18) )
  {
    v18 = (NiPoint3 *)FormHeapAlloc(
                        (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
                      ? 0xFFFFFFFF
                      : 4 * *((unsigned __int16 *)this + 4));
    memcpy(v18, *(this + 0x18), 4 * *((unsigned __int16 *)this + 4)); /*0x759bff*/
  }
  FormHeapFree((unsigned int)a2[1].member.m_pkNormal); /*0x759c0b*/
  a2[1].member.m_pkNormal = v18; /*0x759c10*/
  LOWORD(a2[1].member.m_pkColor) = *((_WORD *)this + 0x32); /*0x759c17*/
  HIWORD(a2[1].member.m_pkColor) = *((_WORD *)this + 0x33); /*0x759c22*/
  LODWORD(a2->member.m_kBound.Center.x) = *(this + 3); /*0x759c2b*/
  LODWORD(a2->member.m_kBound.Center.y) = *(this + 4); /*0x759c33*/
  LODWORD(a2->member.m_kBound.Center.z) = *(this + 5); /*0x759c3b*/
  result = *(this + 6); /*0x759c3e*/
  LODWORD(a2->member.m_kBound.Radius) = result; /*0x759c42*/
  return result; /*0x759c39*/
}
