char __thiscall sub_578C10(_DWORD *this, char *a2, int a3, _DWORD *a4, int a5)
{
  NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *> *v6; // eax
  NiTPointerList__BSImageSpaceShader *v7; // esi
  BSStringT v9; // [esp+14h] [ebp-14h] BYREF
  int v10; // [esp+24h] [ebp-4h]

  v10 = 0;
  v9.m_data = 0;
  v9.m_dataLen = 0;
  v9.m_bufLen = 0;
  BSStringT_Set(&v9, a2, 0);
  LOBYTE(v10) = 1;
  v6 = (NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *> *)sub_578960(this, &v9, a4);
  v7 = (NiTPointerList__BSImageSpaceShader *)v6;
  if ( v6 )
  {
    NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *>::NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *>(
      v6,
      a5,
      (int)a4);
    sub_577AA0(v7);
    FormHeapFree((unsigned int)v7);
  }
  FormHeapFree((unsigned int)v9.m_data);
  FormHeapFree((unsigned int)a2);
  return 1;
}
