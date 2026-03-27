char __thiscall sub_56A510(unsigned __int8 **this, Actor *a2, TESObjectREFR *a3, _BYTE *a4, unsigned __int8 **a5)
{
  char v5; // bl
  TESObjectREFR *v6; // ebp
  bool v7; // zf
  BSExtraData *ExtraXTarget; // eax
  unsigned __int8 *v10; // esi
  char v11; // al
  char v13; // [esp+12h] [ebp-6h]
  char v14; // [esp+13h] [ebp-5h]
  char v15; // [esp+14h] [ebp-4h]
  bool v16; // [esp+15h] [ebp-3h]
  char v17; // [esp+16h] [ebp-2h]
  char v18; // [esp+17h] [ebp-1h]

  v5 = 0;
  v6 = a3;
  v7 = a3 == 0;
  v13 = 1;
  v15 = 0;
  v14 = 0;
  v16 = 0;
  v18 = 0;
  *a4 = 0;
  v17 = 0;
  if ( !v7 )
  {
    ExtraXTarget = TESForm::GetExtraXTarget(v6);
    if ( ExtraXTarget )
      v6 = (TESObjectREFR *)ExtraXTarget;
  }
  if ( !this )
    goto LABEL_52;
  while ( *(this + 1) || *this )
  {
    v10 = *this;
    LOBYTE(a3) = 0;
    if ( !v15 )
    {
      if ( (*v10 & 1) != 0 )
      {
        v5 = sub_56AC50(v10, (int)a2, (int)v6, &a3);
        v15 = 1;
        v16 = 0;
        v14 = (char)a3;
        if ( !(_BYTE)a3 )
          v16 = v5 == 0;
      }
      else
      {
        v11 = sub_56AC50(v10, (int)a2, (int)v6, &a3);
        v5 = v11;
        if ( !v13 || (v13 = 1, !v11) )
          v13 = 0;
        if ( (_BYTE)a3 )
        {
          *a4 = 1;
        }
        else if ( !v11 )
        {
          v17 = 1;
        }
      }
LABEL_14:
      if ( !v13 && !v15 )
        goto LABEL_16;
      goto LABEL_17;
    }
    if ( !v5 )
    {
      v5 = sub_56AC50(v10, (int)a2, (int)v6, &a3);
      if ( v14 || (_BYTE)a3 )
      {
        v14 = 1;
        if ( (_BYTE)a3 )
          goto LABEL_39;
      }
      else
      {
        v14 = 0;
      }
      if ( !v5 )
        v16 = 1;
    }
LABEL_39:
    if ( (*v10 & 1) != 0 )
      goto LABEL_14;
    v15 = 0;
    if ( v13 && v5 )
    {
      v13 = 1;
    }
    else
    {
      v13 = 0;
      if ( !v14 || v16 )
      {
        v17 = 1;
LABEL_16:
        if ( !*a4 )
          goto LABEL_51;
        goto LABEL_17;
      }
      *a4 = 1;
    }
LABEL_17:
    this = (unsigned __int8 **)*(this + 1);
    if ( a5 )
    {
      if ( !v18 && (!this || !*(this + 1) && !*this) )
      {
        this = a5;
        v18 = 1;
      }
    }
    if ( !this )
      break;
  }
  if ( v15 )
  {
    if ( v13 && v5 )
    {
      *a4 = 0;
      return 1;
    }
    v13 = 0;
    if ( !v14 || v16 )
      goto LABEL_52;
    *a4 = 1;
  }
  else if ( v13 )
  {
    goto LABEL_52;
  }
LABEL_51:
  if ( !v17 )
    return v13;
LABEL_52:
  *a4 = 0;
  return v13;
}
