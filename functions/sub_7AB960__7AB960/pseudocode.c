void __thiscall sub_7AB960(_DWORD *this, float *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ebp
  float *v5; // eax
  double v6; // st7
  bool v7; // zf
  double v8; // st7
  double v10; // st7
  _DWORD *v11; // esi
  char v12; // cl
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  void *v15; // [esp+8h] [ebp-10h] BYREF
  float v16; // [esp+Ch] [ebp-Ch]
  float v17; // [esp+10h] [ebp-8h]
  float v18; // [esp+14h] [ebp-4h]
  float v19; // [esp+1Ch] [ebp+4h]

  if ( !*(this + 0x17) && *(this + 2) ) /*0x7ab972*/
  {
    v3 = (_DWORD *)FormHeapAlloc(0x18u); /*0x7ab97f*/
    if ( v3 ) /*0x7ab989*/
    {
      *v3 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7ab98b*/
      v3[1] = 0; /*0x7ab991*/
      v3[2] = 0; /*0x7ab994*/
      v3[3] = 0; /*0x7ab997*/
      v4 = v3; /*0x7ab99a*/
    }
    else
    {
      v4 = 0; /*0x7ab99e*/
    }
    v15 = v4; /*0x7ab9a2*/
    BSTPersistentList_ReleaseFreeNodesToGlobalPool(v4); /*0x7ab9a6*/
    v4[3] = v4[1]; /*0x7ab9ae*/
    v4[1] = 0; /*0x7ab9b1*/
    v4[2] = 0; /*0x7ab9b4*/
    v4[4] = 0; /*0x7ab9b7*/
    v5 = (float *)*(this + 2); /*0x7ab9ba*/
    v6 = v5[0x19]; /*0x7ab9bd*/
    v5 += 0x19; /*0x7ab9c0*/
    v7 = *((_BYTE *)this + 0x35) == 0; /*0x7ab9c3*/
    v16 = v6; /*0x7ab9c7*/
    v17 = v5[3]; /*0x7ab9ce*/
    v8 = v5[6]; /*0x7ab9d2*/
    v18 = v8; /*0x7ab9d9*/
    v10 = a2[1] * v17 + *a2 * v16 + a2[2] * v18; /*0x7ab9f3*/
    if ( !v7 ) /*0x7ab9f5*/
    {
      v19 = v10; /*0x7ab9f7*/
      v10 = v19 - a2[3]; /*0x7ab9ff*/
    }
    *((float *)v4 + 5) = v10; /*0x7aba02*/
    v11 = (_DWORD *)*(this + 0x14); /*0x7aba05*/
    v12 = 0; /*0x7aba08*/
    while ( v11 ) /*0x7aba12*/
    {
      if ( *((float *)v4 + 5) > (double)*(float *)(v11[2] + 0x14) ) /*0x7aba24*/
      {
        v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0x13) + 4))(this + 0x13); /*0x7aba31*/
        v13[2] = v4; /*0x7aba33*/
        *v13 = v11; /*0x7aba36*/
        v13[1] = v11[1]; /*0x7aba3b*/
        v14 = (_DWORD *)v11[1]; /*0x7aba3e*/
        if ( v14 ) /*0x7aba43*/
          *v14 = v13; /*0x7aba45*/
        else
          *(this + 0x14) = v13; /*0x7aba49*/
        v11[1] = v13; /*0x7aba4c*/
        ++*(this + 0x16); /*0x7aba4f*/
        v12 = 1; /*0x7aba53*/
      }
      v11 = (_DWORD *)*v11; /*0x7aba59*/
      if ( v12 ) /*0x7aba5b*/
      {
        ++*(this + 0x17); /*0x7aba5d*/
        *(this + 0x18) = v4; /*0x7aba62*/
        return; /*0x7aba6b*/
      }
    }
    NiTPointerList__AddTail((BSTextureManager *)(this + 0x13), &v15); /*0x7aba7a*/
    *(this + 0x18) = v4; /*0x7aba80*/
  }
  ++*(this + 0x17); /*0x7aba84*/
}
