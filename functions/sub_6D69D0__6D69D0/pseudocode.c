void __thiscall sub_6D69D0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  int v7; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_6EC460(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3D91C);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  sub_6CBAD0(this + 3, (unsigned __int16 *)v2);
  v7 = *((_DWORD *)this + 0xB);
  if ( v7 )
    (*(void (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v7 + 0x30))(v7, v2);
}
