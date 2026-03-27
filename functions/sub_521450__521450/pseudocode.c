unsigned __int8 **__thiscall sub_521450(TESObjectREFR *this, TESObjectREFR *a2, _BYTE *a3)
{
  TESObjectREFR *v3; // ebp
  unsigned __int8 **v4; // edi
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // eax
  TESForm *v6; // eax
  char *FormModelPAth; // eax
  char *m_data; // esi
  TESObjectREFR *v9; // ebx
  UInt32 v10; // esi
  unsigned __int8 **v11; // eax
  BSStringT v14; // [esp+18h] [ebp-14h] BYREF
  unsigned int v15; // [esp+28h] [ebp-4h]

  v3 = a2;
  v4 = 0;
  if ( !a2 )
    return v4;
  v14.m_data = 0;
  v14.m_dataLen = 0;
  v14.m_bufLen = 0;
  GetBaseForm = a2->vtbl->GetBaseForm;
  v15 = 0;
  v6 = GetBaseForm(a2);
  FormModelPAth = GetFormModelPAth(v6);
  sub_521370(FormModelPAth, &v14);
  m_data = v14.m_data;
  if ( v14.m_data )
  {
    if ( *v14.m_data )
    {
      a2 = 0;
      if ( NiTMap_GetAt(this, (int)v14.m_data, &a2) )
      {
        v9 = a2;
        if ( a2 )
        {
          v10 = 0;
          a2 = (TESObjectREFR *)a2->member.super.refID;
          if ( a2 )
          {
            do
            {
              v11 = (unsigned __int8 **)sub_494ED0(v9, v10);
              if ( v11 )
              {
                v4 = sub_5206B0(v11, (int)v3, a3);
                if ( v4 )
                  break;
              }
              ++v10;
            }
            while ( v10 < (unsigned int)a2 );
          }
          m_data = v14.m_data;
        }
      }
    }
  }
  v15 = 0xFFFFFFFF;
  FormHeapFree((unsigned int)m_data);
  if ( v4 && sub_520210(v4) && !sub_520220(v4) )
    return 0;
  else
    return v4;
}
