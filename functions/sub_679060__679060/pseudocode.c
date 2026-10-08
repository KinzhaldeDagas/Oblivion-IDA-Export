LONG __thiscall sub_679060(int *this)
{
  LONG result; // eax
  int *v3; // ebp
  _BYTE *v4; // edi
  int (__thiscall ***v5)(_DWORD, int); // esi
  LONG v6; // [esp+Ch] [ebp-4h] BYREF

  result = 0; /*0x679063*/
  v6 = 0; /*0x679068*/
  if ( *(this + 0x11) || (result = 1, *(this + 0x10)) ) /*0x679074*/
  {
    v3 = this + 0x10; /*0x6790ac*/
    if ( this != (int *)0xFFFFFFC0 ) /*0x6790b0*/
    {
      do /*0x679110*/
      {
        v4 = (_BYTE *)*NodeVoid_GetDataAddRef(v3, &v6); /*0x6790be*/
        result = v6; /*0x6790c0*/
        if ( v6 ) /*0x6790c6*/
        {
          v5 = (int (__thiscall ***)(_DWORD, int))v6; /*0x6790c8*/
          result = InterlockedDecrement((volatile LONG *)(v6 + 4)); /*0x6790ce*/
          if ( !result ) /*0x6790d6*/
            result = (**v5)(v5, 1); /*0x6790e4*/
        }
        if ( v4 ) /*0x6790e8*/
        {
          result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 4))(v4); /*0x6790f1*/
          if ( result ) /*0x6790f5*/
          {
            while ( (BSStringT *)result != &NiRTTI_BSTempEffectGeometryDecal ) /*0x6790fc*/
            {
              result = *(_DWORD *)(result + 4); /*0x6790fe*/
              if ( !result ) /*0x679103*/
                goto LABEL_16; /*0x679103*/
            }
            v4[0x28] = 1; /*0x679107*/
          }
        }
LABEL_16:
        v3 = (int *)v3[1]; /*0x67910b*/
      }
      while ( v3 ); /*0x679110*/
    }
  }
  return result; /*0x679113*/
}
