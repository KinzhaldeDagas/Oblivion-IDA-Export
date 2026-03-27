NiTPointerList_Node_void *__thiscall sub_854FF0(
        _DWORD *this,
        NiGeometry *a2,
        NiTPointerList_Node_void *a3,
        int a4,
        char a5,
        int a6)
{
  int v7; // ebp
  float *v8; // esi
  NiTPointerList_Node_void *result; // eax
  NiGeometry *v10; // edi
  float v11; // edx
  float v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  float v17[3]; // [esp+14h] [ebp-18h] BYREF
  int v18; // [esp+28h] [ebp-4h]

  v7 = (int)a2;
  v8 = *((float **)*sub_405760(a2, (volatile LONG **)&a2) + 4);
  result = (NiTPointerList_Node_void *)a2;
  if ( a2 )
  {
    v10 = a2;
    result = (NiTPointerList_Node_void *)InterlockedDecrement((volatile LONG *)&a2->member);
    if ( !result )
      result = (NiTPointerList_Node_void *)((int (__thiscall *)(NiGeometry *, int))v10->__vftable->super.super.super.Destructor)(
                                             v10,
                                             1);
  }
  if ( v8 )
  {
    v11 = v8[0x11];
    v12 = v8[0x12];
    v17[0] = v8[0x10];
    v17[1] = v11;
    v17[2] = v12;
    result = (NiTPointerList_Node_void *)sub_8AA390(v17, (float *)&dword_B3FA90);
    if ( (_BYTE)result )
    {
      v13 = *(_DWORD *)(*(this + 0xC) + 8);
      if ( v13 )
        *(_BYTE *)(v13 + 7) = 1;
      if ( a5 )
      {
        if ( (_BYTE)a4 == 1 )
        {
          v15 = FormHeapAlloc(0x10u);
          a4 = v15;
          v18 = 1;
          if ( v15 )
            v16 = sub_7E2370(v15, v7, 0x19F, 0, 0, 0);
          else
            v16 = 0;
          a4 = v16;
          goto LABEL_18;
        }
      }
      else if ( (_BYTE)a4 == 1 )
      {
        v14 = FormHeapAlloc(0x10u);
        a4 = v14;
        v18 = 0;
        if ( v14 )
          a4 = sub_7E2370(v14, v7, 0x19E, 0, 0, 0);
        else
          a4 = 0;
LABEL_18:
        v18 = 0xFFFFFFFF;
        return sub_5B1E20((BSTextureManager *)(this + 0xA), (void **)&a4);
      }
      result = a3;
      ++LOWORD(a3->next);
    }
  }
  return result;
}
