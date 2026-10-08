// Pass205: Ensures water node has WaterShaderProperty subtype 0x0C; allocates/attaches one if missing or wrong property kind-4 subtype.
char __stdcall sub_7DD370(WaterShader *a1)
{
  int **v1; // edi
  NiProperty *NiPropertyByID; // eax
  WaterShader *v3; // esi
  BSShaderProperty *v4; // eax
  BSShaderProperty *v5; // esi
  NiProperty *v6; // eax
  unsigned __int8 *m_pcName; // eax

  v1 = (int **)a1; /*0x7dd393*/
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)a1, 4); /*0x7dd39b*/
  if ( NiPropertyByID ) /*0x7dd3a2*/
  {
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xC ) /*0x7dd3b9*/
      return 1; /*0x7dd3b9*/
    sub_708560(v1, (volatile LONG **)&a1, 4); /*0x7dd3c8*/
    v3 = a1; /*0x7dd3cd*/
    if ( a1 ) /*0x7dd3d3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&a1->super.member) ) /*0x7dd3d9*/
      {
        if ( v3 ) /*0x7dd3e5*/
          v3->super.__vftable->super.super.super.super.Destructor((NiRefObject *)v3, 1); /*0x7dd3ef*/
      }
    }
  }
  v4 = (BSShaderProperty *)FormHeapAlloc(0x88u); /*0x7dd3f6*/
  if ( v4 ) /*0x7dd40c*/
    v5 = sub_85BBE0(v4); /*0x7dd415*/
  else
    v5 = 0; /*0x7dd419*/
  v6 = NiNode_GetNiPropertyByID((NiNode *)v1, 2); /*0x7dd427*/
  if ( v6 ) /*0x7dd42e*/
  {
    m_pcName = (unsigned __int8 *)v6->members.m_pcName; /*0x7dd430*/
    if ( m_pcName ) /*0x7dd435*/
    {
      if ( !CRT_StricmpLocaleDispatch(m_pcName, "lava") ) /*0x7dd43d*/
        LOBYTE(OB_ShaderConstantStorage_010201A0[0x68C]) = 1; /*0x7dd449*/
    }
  }
  sub_405680((NiNode *)v1, v5); /*0x7dd453*/
  if ( !(*((unsigned __int8 (__thiscall **)(BSShaderProperty *, int **))v5->vtbl + 0x16))(v5, v1) ) /*0x7dd460*/
  {
    sub_4A1220(v1, (int)v5); /*0x7dd469*/
    return 0; /*0x7dd481*/
  }
  return 1; /*0x7dd470*/
}
