ActiveEffect *__thiscall ScriptEffect_Clone(int *this)
{
  ActiveEffect *v2; // edi
  int v4; // [esp+0h] [ebp-1Ch]
  int v5; // [esp+4h] [ebp-18h]
  int v6; // [esp+8h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-10h]
  MagicCaster *v8; // [esp+10h] [ebp-Ch]
  MagicItem *v9; // [esp+14h] [ebp-8h]

  v7 = FormHeapAlloc(0x40u); /*0x6a44cf*/
  v2 = 0; /*0x6a44d3*/
  if ( v7 ) /*0x6a44db*/
    v2 = ScriptEffect::ScriptEffect(*(this + 9), *(this + 2), *(this + 3), v4, v5, v6, v7, v8, v9, 0); /*0x6a44f0*/
  (*(void (__cdecl **)(ActiveEffect *))(*this + 0x2C))(v2); /*0x6a4502*/
  return v2; /*0x6a4506*/
}
