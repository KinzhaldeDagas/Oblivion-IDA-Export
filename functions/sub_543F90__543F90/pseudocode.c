void __thiscall sub_543F90(Ni2DBuffer **this)
{
  NiTexture *v2; // edi
  int v3; // eax
  NiTexture *v4; // eax
  int v5; // eax
  Ni2DBuffer *v6; // eax
  NiTexturingProperty *v7; // eax
  NiTexturingProperty *v8; // eax
  Ni2DBuffer **v9; // esi
  NiTexturingProperty *v10; // eax
  NiTexturingProperty *v11; // eax
  UInt32 v12; // [esp+Ch] [ebp-14h] BYREF
  NiTexturingProperty *v13; // [esp+10h] [ebp-10h]
  unsigned int v14; // [esp+1Ch] [ebp-4h]

  v2 = 0; /*0x543fb7*/
  v12 = 0; /*0x543fb9*/
  v3 = (int)*(this + 9); /*0x543fbd*/
  v14 = 0; /*0x543fc2*/
  if ( v3 ) /*0x543fc6*/
  {
    v4 = (NiTexture *)sub_4A1ED0((_DWORD **)unk_B35300, v3, 0); /*0x543fd0*/
    if ( !v4 ) /*0x543fd7*/
      goto LABEL_11; /*0x543fd7*/
    v2 = v4; /*0x543fd9*/
    v12 = (UInt32)v4; /*0x543fdf*/
    InterlockedIncrement((volatile LONG *)&v4->members); /*0x543fe3*/
  }
  else
  {
    v5 = (int)*(this + 8); /*0x543feb*/
    if ( !v5 ) /*0x543ff0*/
      goto LABEL_11; /*0x543ff0*/
    v6 = (Ni2DBuffer *)(*(int (__thiscall **)(UInt32, int, _DWORD))(*(_DWORD *)unk_B35300 + 4))(unk_B35300, v5, 0); /*0x544000*/
    NiSmartPointer_Set__((Ni2DBuffer **)&v12, v6); /*0x544007*/
    v2 = (NiTexture *)v12; /*0x54400c*/
  }
  if ( v2 ) /*0x544012*/
  {
    v7 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x544016*/
    v13 = v7; /*0x54401e*/
    LOBYTE(v14) = 1; /*0x544024*/
    if ( v7 ) /*0x544029*/
      v8 = NiTexturingProperty::NiTexturingProperty(v7); /*0x54402d*/
    else
      v8 = 0; /*0x544034*/
    v9 = this + 0xB; /*0x544036*/
    LOBYTE(v14) = 0; /*0x54403c*/
    NiSmartPointer_Set__(v9, (Ni2DBuffer *)v8); /*0x544041*/
    OB_NiTexturingProperty_SetBaseTexture_010201A0((NiTexturingProperty *)*v9, v2); /*0x544049*/
    goto LABEL_16; /*0x54404e*/
  }
LABEL_11:
  if ( *(this + 8) )
  {
    v10 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x544059*/
    v13 = v10; /*0x544061*/
    LOBYTE(v14) = 2; /*0x544067*/
    if ( v10 ) /*0x54406c*/
    {
      v11 = sub_704530(v10, (char *)*(this + 8), 0); /*0x544076*/
      LOBYTE(v14) = 0; /*0x54407f*/
      NiSmartPointer_Set__(this + 0xB, (Ni2DBuffer *)v11); /*0x544084*/
    }
    else
    {
      LOBYTE(v14) = 0; /*0x544091*/
      NiSmartPointer_Set__(this + 0xB, 0); /*0x544095*/
    }
  }
  else
  {
    PrintError("Warning:  Unable to locate texture file: %s", 0);
  }
LABEL_16:
  v14 = 0xFFFFFFFF; /*0x5440aa*/
  if ( v2 ) /*0x5440b4*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v2->members) ) /*0x5440ba*/
      v2->__vftable->super.super.Destructor((NiRefObject *)v2, 1); /*0x5440cc*/
  }
}
