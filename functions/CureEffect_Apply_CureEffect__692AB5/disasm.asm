0x692AB5: mov     ecx, [ecx+20h]; this
0x692AB8: push    0; casterFilterOrNull
0x692ABA: push    eax; effectCode
0x692ABB: call    MagicTarget_RemoveActiveEffectsByCode; Removes every nonterminated active effect whose effectCode matches. If casterFilterOrNull is nonnull, only effects from that caster are removed; null matches all casters. Native ABI is thiscall with two stack args and void return; prior ESI/ST0/userpurge inputs were decompiler artifacts.
0x692AC0: retn
