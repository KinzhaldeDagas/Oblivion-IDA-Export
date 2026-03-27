ScriptEffect *__thiscall ScriptEffect_Clone(int *this)
{
  ScriptEffect *v2; // edi
  int v4; // [esp+0h] [ebp-1Ch]
  int v5; // [esp+4h] [ebp-18h]
  int v6; // [esp+8h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-10h]
  int v8; // [esp+10h] [ebp-Ch]
  int v9; // [esp+14h] [ebp-8h]

  v7 = FormHeapAlloc(0x40u);
  v2 = 0;
  if ( v7 )
    v2 = ScriptEffect::ScriptEffect(*(this + 9), *(this + 2), *(this + 3), v4, v5, v6, v7, v8, v9, 0);
  (*(void (__thiscall **)(int *, ScriptEffect *))(*this + 0x2C))(this, v2);
  return v2;
}
