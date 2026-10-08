char __thiscall sub_578C10(_DWORD *this, char *a2, int a3, _DWORD *a4, int a5)
{
  int *v6; // eax
  NiTPointerList__BSImageSpaceShader *v7; // esi
  BSStringT v9; // [esp+14h] [ebp-14h] BYREF
  int v10; // [esp+24h] [ebp-4h]

  v10 = 0; /*0x578c45*/
  v9.m_data = 0; /*0x578c49*/
  v9.m_dataLen = 0; /*0x578c4d*/
  v9.m_bufLen = 0; /*0x578c52*/
  BSStringT_Set(&v9, a2, 0); /*0x578c57*/
  LOBYTE(v10) = 1; /*0x578c68*/
  v6 = sub_578960(this, &v9, a4); /*0x578c6d*/
  v7 = (NiTPointerList__BSImageSpaceShader *)v6; /*0x578c72*/
  if ( v6 ) /*0x578c76*/
  {
    NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *>::NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *>( /*0x578c80*/
      (NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *> *)v6,
      a5,
      (int)a4);
    sub_577AA0(v7); /*0x578c87*/
    FormHeapFree((unsigned int)v7); /*0x578c8d*/
  }
  FormHeapFree((unsigned int)v9.m_data); /*0x578c9a*/
  FormHeapFree((unsigned int)a2); /*0x578ca0*/
  return 1; /*0x578caa*/
}
