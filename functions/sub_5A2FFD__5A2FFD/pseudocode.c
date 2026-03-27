// positive sp value has been detected, the output may be wrong!
void __usercall sub_5A2FFD(
        char *a1@<edx>,
        char a2@<bpl>,
        int a3@<esi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>)
{
  BSStringT v6[3]; // [esp-1Ch] [ebp-24h] BYREF
  BSStringT *v7; // [esp+0h] [ebp-8h]

  v7 = v6;
  BSStringT_constr_str(v6, a1);
  ShowMessageBox__(a3, a2, a4, a5, a6, v6[0].m_data, *(int *)&v6[0].m_dataLen);
}
