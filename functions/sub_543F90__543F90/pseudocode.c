NiTexturingProperty_Map *__thiscall sub_543F90(Ni2DBuffer **this)
{
  NiRenderedTexture *v2; // edi
  int v3; // eax
  NiRenderedTexture *v4; // eax
  int v5; // eax
  Ni2DBuffer *v6; // eax
  NiTexturingProperty *v7; // eax
  NiTexturingProperty *v8; // eax
  Ni2DBuffer **v9; // esi
  NiTexturingProperty_Map *result; // eax
  NiTexturingProperty *v11; // eax
  NiTexturingProperty *v12; // eax
  UInt32 v13; // [esp+Ch] [ebp-14h] BYREF
  NiTexturingProperty *v14; // [esp+10h] [ebp-10h]
  unsigned int v15; // [esp+1Ch] [ebp-4h]

  v2 = 0;
  v13 = 0;
  v3 = (int)*(this + 9);
  v15 = 0;
  if ( v3 )
  {
    v4 = (NiRenderedTexture *)sub_4A1ED0((_DWORD **)dword_B35300, v3, 0);
    if ( !v4 )
      goto LABEL_11;
    v2 = v4;
    v13 = (UInt32)v4;
    InterlockedIncrement((volatile LONG *)&v4->member);
  }
  else
  {
    v5 = (int)*(this + 8);
    if ( !v5 )
      goto LABEL_11;
    v6 = (Ni2DBuffer *)(*(int (__thiscall **)(UInt32, int, _DWORD))(*(_DWORD *)dword_B35300 + 4))(dword_B35300, v5, 0);
    NiSmartPointer_Set__((Ni2DBuffer **)&v13, v6);
    v2 = (NiRenderedTexture *)v13;
  }
  if ( v2 )
  {
    v7 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
    v14 = v7;
    LOBYTE(v15) = 1;
    if ( v7 )
      v8 = NiTexturingProperty::NiTexturingProperty(v7);
    else
      v8 = 0;
    v9 = this + 0xB;
    LOBYTE(v15) = 0;
    NiSmartPointer_Set__(v9, (Ni2DBuffer *)v8);
    result = NiTexturingProperty::SetUnk08((NiTexturingProperty *)*v9, v2);
    goto LABEL_16;
  }
LABEL_11:
  if ( *(this + 8) )
  {
    v11 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
    v14 = v11;
    LOBYTE(v15) = 2;
    if ( v11 )
    {
      v12 = sub_704530(v11, (char *)*(this + 8), 0);
      LOBYTE(v15) = 0;
      result = (NiTexturingProperty_Map *)NiSmartPointer_Set__(this + 0xB, (Ni2DBuffer *)v12);
    }
    else
    {
      LOBYTE(v15) = 0;
      result = (NiTexturingProperty_Map *)NiSmartPointer_Set__(this + 0xB, 0);
    }
  }
  else
  {
    result = (NiTexturingProperty_Map *)PrintError("Warning:  Unable to locate texture file: %s", 0);
  }
LABEL_16:
  v15 = 0xFFFFFFFF;
  if ( v2 )
  {
    result = (NiTexturingProperty_Map *)InterlockedDecrement((volatile LONG *)&v2->member);
    if ( !result )
      return (NiTexturingProperty_Map *)((_DWORD *(__thiscall *)(NiRenderedTexture *, int))v2->__vftable->super.super.super.Destructor)(
                                          v2,
                                          1);
  }
  return result;
}
