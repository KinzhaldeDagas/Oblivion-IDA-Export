void __thiscall sub_723C80(int *this, unsigned int *a2)
{
  int *v2; // ebp
  unsigned int *v3; // ebx
  NiObject *v4; // eax
  unsigned int v5; // edi
  NiObject *v6; // esi
  void (__cdecl *v7)(unsigned int, unsigned int **, int, int *, int); // eax
  int v8; // ebp
  void (__cdecl *v9)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v10)(unsigned int, float *, int, int *, int); // eax
  bool v11; // cf
  NiObject *v12; // edi
  unsigned int v13; // [esp-28h] [ebp-6Ch]
  unsigned int v14; // [esp-14h] [ebp-58h]
  unsigned int v15; // [esp-14h] [ebp-58h]
  int v16; // [esp+14h] [ebp-30h] BYREF
  int v17; // [esp+18h] [ebp-2Ch] BYREF
  int v18; // [esp+1Ch] [ebp-28h] BYREF
  float v19; // [esp+20h] [ebp-24h] BYREF
  float v20; // [esp+24h] [ebp-20h]
  int *v21; // [esp+28h] [ebp-1Ch]
  _DWORD v22[3]; // [esp+2Ch] [ebp-18h] BYREF
  unsigned int v23; // [esp+40h] [ebp-4h]

  v2 = this; /*0x723ca7*/
  v21 = this; /*0x723ca9*/
  v3 = a2; /*0x723cad*/
  sub_7247D0(this, (int)a2); /*0x723cb2*/
  if ( v3[0x36] > 0xA00010B ) /*0x723cc1*/
  {
    sub_712A20(v3); /*0x723e2e*/
  }
  else
  {
    v4 = (NiObject *)FormHeapAlloc(0x28u); /*0x723cc9*/
    v20 = *(float *)&v4; /*0x723cd1*/
    v5 = 0; /*0x723cd5*/
    v23 = 0; /*0x723cd9*/
    if ( v4 ) /*0x723cdd*/
      v6 = sub_7249A0(v4); /*0x723ce6*/
    else
      v6 = 0; /*0x723cea*/
    v23 = 0xFFFFFFFF; /*0x723cf1*/
    sub_709430((char *)v22, (signed int)v3); /*0x723cf9*/
    v6[1].__vftable = (NiObjectVtbl *)v22[0]; /*0x723d02*/
    v6[1].members.m_uiRefCount = v22[1]; /*0x723d09*/
    v6[2].__vftable = (NiObjectVtbl *)v22[2]; /*0x723d17*/
    v14 = v3[0x87]; /*0x723d27*/
    v7 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v14 + 4); /*0x723d28*/
    v16 = 4; /*0x723d2b*/
    v7(v14, &a2, 4, &v16, 1); /*0x723d33*/
    if ( a2 ) /*0x723d3e*/
    {
      sub_724AB0(v6, (int)v3, (signed int)a2); /*0x723d47*/
      if ( a2 ) /*0x723d50*/
      {
        v8 = 0; /*0x723d56*/
        do /*0x723de6*/
        {
          v15 = v3[0x87]; /*0x723d74*/
          v9 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v15 + 4); /*0x723d75*/
          v16 = 4; /*0x723d78*/
          v9(v15, &v18, 4, &v16, 1); /*0x723d80*/
          v13 = v3[0x87]; /*0x723d96*/
          v10 = *(void (__cdecl **)(unsigned int, float *, int, int *, int))(v13 + 4); /*0x723d97*/
          v17 = 4; /*0x723d9a*/
          v10(v13, &v19, 4, &v17, 1); /*0x723da2*/
          v16 = v18; /*0x723da8*/
          v11 = (NiObjectVtbl *)v5 < v6[4].__vftable; /*0x723daf*/
          v20 = v19; /*0x723db6*/
          if ( !v11 ) /*0x723dba*/
            sub_724AB0(v6, (int)v3, v5 + 1); /*0x723dc2*/
          *(float *)(v6[4].members.m_uiRefCount + v8) = *(float *)&v16; /*0x723dce*/
          ++v5; /*0x723dd8*/
          *(float *)(v6[4].members.m_uiRefCount + v8 + 4) = v20; /*0x723ddb*/
          v8 += 0x10; /*0x723ddf*/
        }
        while ( v5 < (unsigned int)a2 ); /*0x723de6*/
        v2 = v21; /*0x723dec*/
      }
    }
    v12 = (NiObject *)v2[0x3F]; /*0x723df0*/
    if ( v12 != v6 ) /*0x723df8*/
    {
      if ( v12 ) /*0x723dfc*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&v12->members) ) /*0x723e02*/
          v12->__vftable->super.Destructor((NiRefObject *)v12, 1); /*0x723e18*/
      }
      v2[0x3F] = (int)v6; /*0x723e1a*/
      InterlockedIncrement((volatile LONG *)&v6->members); /*0x723e24*/
    }
  }
}
