void __thiscall sub_715D80(float *this, int a2, int *a3)
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

  v3 = a3;
  v4 = a2;
  sub_700770(this, a2, (_DWORD **)a3);
  *(_WORD *)(v4 + 8) = *((_WORD *)this + 4);
  *(float *)(v4 + 0xC) = *(this + 3);
  *(float *)(v4 + 0x10) = *(this + 4);
  *(float *)(v4 + 0x14) = *(this + 5);
  *(float *)(v4 + 0x18) = *(this + 6);
  *(float *)(v4 + 0x1C) = *(this + 7);
  *(float *)(v4 + 0x20) = *(this + 8);
  *(float *)(v4 + 0x24) = *(this + 9);
  v6 = *((_DWORD *)this + 0xC);
  if ( v6 )
  {
    if ( NiTMap_GetAt((_DWORD *)*v3, v6, &a2)
      && (v7 = a2,
          v8 = *((_DWORD *)this + 0xC),
          v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2),
          v10 = *(int (__thiscall **)(int))(*(_DWORD *)v8 + 4),
          a2 = v9,
          v11 = v10(v8),
          v11 == a2) )
    {
      *(_DWORD *)(v4 + 0x30) = v7;
    }
    else
    {
      *(_DWORD *)(v4 + 0x30) = 0;
    }
  }
  v12 = *((_DWORD *)this + 0xD);
  if ( v12 )
  {
    v13 = (Ni2DBuffer *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v12 + 0x18))(v12, a3);
    NiSmartPointer_Set__((Ni2DBuffer **)(v4 + 0x34), v13);
  }
}
