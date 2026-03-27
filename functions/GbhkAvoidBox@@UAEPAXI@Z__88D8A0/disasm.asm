0x88D8A0: push    esi
0x88D8A1: mov     esi, ecx
0x88D8A3: mov     dword ptr [esi], offset ??_7bhkAvoidBox@@6B@; const bhkAvoidBox::`vftable'
0x88D8A9: call    ??1bhkAabbPhantom@@UAE@XZ; bhkAabbPhantom::~bhkAabbPhantom(void)
0x88D8AE: test    byte ptr [esp+4+arg_0], 1
0x88D8B3: jz      short loc_88D8C8
0x88D8B5: movzx   eax, byte ptr [esi-1]
0x88D8B9: mov     ecx, esi
0x88D8BB: sub     ecx, eax
0x88D8BD: push    ecx; void *
0x88D8BE: mov     ecx, offset FormHeap
0x88D8C3: call    MemoryHeap_Free_checked
0x88D8C8: mov     eax, esi
0x88D8CA: pop     esi
0x88D8CB: retn    4
