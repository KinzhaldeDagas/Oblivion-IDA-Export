void __thiscall sub_75DB40(unsigned __int16 *this, unsigned int a2)
{
  unsigned int v3; // edi
  __int16 v4; // ax
  int v5; // ecx
  unsigned __int16 v6; // ax
  void (__thiscall ****v7)(_DWORD, int); // eax
  void (__thiscall ***v8)(_DWORD, int); // ecx
  bool v9; // zf
  MEF_RefPointerArray16 *v10; // eax
  unsigned int v11; // [esp-8h] [ebp-18h]
  MEF_RefPointerArray16 *v12; // [esp+Ch] [ebp-4h] BYREF

  v3 = *(this + 0x3F); /*0x75db4a*/
  if ( a2 >= v3 ) /*0x75db50*/
  {
    if ( a2 > v3 ) /*0x75dba6*/
    {
      NiTArray_SetSize(this + 0x3A, a2); /*0x75dbaf*/
      do /*0x75dc10*/
      {
        v10 = (MEF_RefPointerArray16 *)FormHeapAlloc(0x10u); /*0x75dbc2*/
        if ( v10 ) /*0x75dbcc*/
        {
          v10->vtable = &NiTArray<NiPointer<NiAVObject>>::`vftable'; /*0x75dbce*/
          v10->capacity = 0; /*0x75dbd4*/
          v10->growBy = 1; /*0x75dbd8*/
          v10->usedEnd = 0; /*0x75dbde*/
          v10->occupiedCount = 0; /*0x75dbe2*/
          v10->data = 0; /*0x75dbe6*/
        }
        else
        {
          v10 = 0; /*0x75dbeb*/
        }
        v11 = *((_DWORD *)this + 0x1C); /*0x75dbf0*/
        v12 = v10; /*0x75dbf3*/
        NiTObjectArray_Resize16(v10, v11); /*0x75dbf7*/
        NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0x3A), v3++, &v12); /*0x75dc04*/
      }
      while ( v3 < a2 ); /*0x75dc10*/
    }
  }
  else
  {
    do /*0x75db9d*/
    {
      v4 = *(this + 0x3F); /*0x75db61*/
      if ( v4 ) /*0x75db68*/
      {
        v5 = *((_DWORD *)this + 0x1E); /*0x75db6a*/
        v6 = v4 - 1; /*0x75db6d*/
        *(this + 0x3F) = v6; /*0x75db70*/
        v7 = (void (__thiscall ****)(_DWORD, int))(v5 + 4 * v6); /*0x75db77*/
        v8 = *v7; /*0x75db7a*/
        v9 = *v7 == 0; /*0x75db7c*/
        *v7 = 0; /*0x75db7e*/
        if ( !v9 ) /*0x75db80*/
        {
          --*(this + 0x40); /*0x75db82*/
          if ( v8 ) /*0x75db8b*/
            (**v8)(v8, 1); /*0x75db93*/
        }
      }
    }
    while ( *(this + 0x3F) > a2 ); /*0x75db9d*/
  }
}
