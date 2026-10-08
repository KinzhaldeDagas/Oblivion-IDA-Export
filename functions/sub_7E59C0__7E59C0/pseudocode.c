void __thiscall sub_7E59C0(MEF_RefPointerArray16 *this, NiAVObject *element)
{
  NiNode *v3; // esi
  NiRTTI *v4; // eax
  int v5; // eax
  int v6; // edi
  unsigned int i; // esi
  NiProperty *NiPropertyByID; // eax
  struct NiRTTI *v9; // eax
  NiProperty *v10; // eax
  size_t v11; // [esp-4h] [ebp-20h]

  v3 = (NiNode *)element; /*0x7e59e5*/
  if ( element ) /*0x7e59eb*/
  {
    v4 = element->vtbl->super.GetType(element); /*0x7e59f8*/
    if ( v4 ) /*0x7e59fc*/
    {
      while ( v4 != &stru_B3FD54 ) /*0x7e5a05*/
      {
        v4 = v4->parent; /*0x7e5a07*/
        if ( !v4 ) /*0x7e5a0c*/
          goto LABEL_5; /*0x7e5a0c*/
      }
      NiPropertyByID = NiNode_GetNiPropertyByID(v3, 4); /*0x7e5a60*/
      if ( NiPropertyByID ) /*0x7e5a67*/
      {
        v9 = (struct NiRTTI *)(*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 1))(NiPropertyByID); /*0x7e5a74*/
        if ( v9 ) /*0x7e5a78*/
        {
          while ( v9 != &NiRTTI_BSShaderLightingProperty ) /*0x7e5a85*/
          {
            v9 = v9->parent; /*0x7e5a87*/
            if ( !v9 ) /*0x7e5a8c*/
              return; /*0x7e5a8c*/
          }
          v10 = NiNode_GetNiPropertyByID(v3, 2); /*0x7e5aa7*/
          if ( !v10 || !sub_8AA350((float *)&v10[1].members.m_extraDataList, &stru_B3FA90.x) ) /*0x7e5ab8*/
          {
            element = (NiAVObject *)v3; /*0x7e5ac5*/
            InterlockedIncrement((volatile LONG *)&v3->members); /*0x7e5ac9*/
            NiTObjectArray_AddFirstEmpty(this + 0x11, (void **)&element); /*0x7e5ae2*/
            if ( !InterlockedDecrement((volatile LONG *)&v3->members) ) /*0x7e5af0*/
              v3->vtbl->super.super.super.Destructor((NiRefObject *)v3, 1); /*0x7e5b02*/
          }
        }
      }
    }
    else
    {
LABEL_5:
      v5 = (int)v3->vtbl->super.super.Unk_02((NiObject *)v3); /*0x7e5a0e*/
      v6 = v5; /*0x7e5a17*/
      if ( v5 ) /*0x7e5a1b*/
      {
        LODWORD(v11) = 3; /*0x7e5a24*/
        if ( strncmp(*(const char **)(v5 + 8), off_A738A4, v11) ) /*0x7e5a2c*/
        {
          for ( i = 0; /*0x7e5a43*/
                *(unsigned __int16 *)(v6 + 0xB6) > i;
                sub_7E59C0(this, *(NiObject **)(*(_DWORD *)(v6 + 0xB0) + 4 * i++)) )
          {
            ; /*0x7e5b25*/
          }
        }
      }
    }
  }
}
