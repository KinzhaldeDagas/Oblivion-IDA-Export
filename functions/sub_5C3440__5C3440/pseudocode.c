int __thiscall sub_5C3440(_DWORD *this, char *a2, int a3, unsigned __int8 *a4, int a5)
{
  _DWORD *v6; // eax
  int v7; // esi
  BSStringT v9; // [esp-Ch] [ebp-2Ch] BYREF
  unsigned __int8 *v10; // [esp-4h] [ebp-24h]
  BSStringT *v11; // [esp+10h] [ebp-10h]
  int v12; // [esp+1Ch] [ebp-4h]

  v10 = a4;
  v11 = &v9;
  v12 = 1;
  v9.m_data = 0;
  v9.m_dataLen = 0;
  v9.m_bufLen = 0;
  BSStringT_Set(&v9, a2, 0);
  v6 = (_DWORD *)sub_5C3110(this, (unsigned __int8 *)v9.m_data, *(int *)&v9.m_dataLen);
  v7 = sub_589930(v6, v10);
  FormHeapFree((unsigned int)a2);
  FormHeapFree((unsigned int)a4);
  return v7;
}
