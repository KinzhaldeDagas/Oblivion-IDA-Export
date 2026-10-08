// Verified SaveHitEffectList serializes the HitEffectNode chain at ActiveEffect+0x34. Each node's BSTempEffect reports a type byte through vtable +0x54 and writes type-specific payload through +0x78; the loop increments a byte count. This data is present only from save version 0x2A.
int __userpurge ActiveEffect_Base_SaveEffect_SaveHitEffectList@<eax>(
        int a1@<ebp>,
        _DWORD *a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _BYTE *a9,
        int a10,
        int a11,
        char a12)
{
  _DWORD *v12; // esi

  v12 = *(_DWORD **)(a1 + 0x34); /*0x68dbe5*/
  if ( v12 == a2 ) /*0x68dbea*/
    return ActiveEffect_Base_SaveEffect_::DoneDataList(a3, a4, a5, a6, a7, a8, a9); /*0x68dbea*/
  else
    return ActiveEffect_Base_SaveEffect_::LoopTest(a11, a1, v12, a3, a4, a5, a6, a7, a8, (int)a9, a10, a11, a12); /*0x68dbee*/
}
