// Copies flags and timing values through +0x24. Remaps target +0x30 through the clone map only when runtime types match, and clones the refcounted next-controller chain at +0x34. Runtime cache +0x28 and update/force bytes are not copied here.
void __thiscall NiTimeController_CopyMembers(float *this, int a2, int *a3)
{
  int *v3; // ebx
  int v4; // edi
  int v6; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // eax
  int (__thiscall *v10)(int); // edx
  int v11; // eax
  int v12; // ecx
  Ni2DBuffer *v13; // eax

  v3 = a3; /*0x715d81*/
  v4 = a2; /*0x715d87*/
  sub_700770(this, a2, (_DWORD **)a3); /*0x715d8f*/
  *(_WORD *)(v4 + 8) = *((_WORD *)this + 4); /*0x715d98*/
  *(float *)(v4 + 0xC) = *(this + 3); /*0x715d9f*/
  *(float *)(v4 + 0x10) = *(this + 4); /*0x715da5*/
  *(float *)(v4 + 0x14) = *(this + 5); /*0x715dab*/
  *(float *)(v4 + 0x18) = *(this + 6); /*0x715db1*/
  *(float *)(v4 + 0x1C) = *(this + 7); /*0x715db7*/
  *(float *)(v4 + 0x20) = *(this + 8); /*0x715dbd*/
  *(float *)(v4 + 0x24) = *(this + 9); /*0x715dc3*/
  v6 = *((_DWORD *)this + 0xC); /*0x715dc6*/
  if ( v6 ) /*0x715dcb*/
  {
    if ( NiTMap_GetAt((_DWORD *)*v3, v6, &a2) /*0x715e03*/
      && (v7 = a2,
          v8 = *((_DWORD *)this + 0xC),
          v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2),
          v10 = *(int (__thiscall **)(int))(*(_DWORD *)v8 + 4),
          a2 = v9,
          v11 = v10(v8),
          v11 == a2) )
    {
      *(_DWORD *)(v4 + 0x30) = v7; /*0x715e05*/
    }
    else
    {
      *(_DWORD *)(v4 + 0x30) = 0; /*0x715e0a*/
    }
  }
  v12 = *((_DWORD *)this + 0xD); /*0x715e12*/
  if ( v12 ) /*0x715e17*/
  {
    v13 = (Ni2DBuffer *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v12 + 0x18))(v12, a3); /*0x715e23*/
    NiSmartPointer_Set__((Ni2DBuffer **)(v4 + 0x34), v13); /*0x715e29*/
  }
}
