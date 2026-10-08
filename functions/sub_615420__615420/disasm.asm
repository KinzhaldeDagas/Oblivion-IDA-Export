0x615420: push    esi
0x615421: mov     esi, ecx
0x615423: cmp     dword ptr [esi+70h], 6
0x615427: jnz     short loc_615474
0x615429: mov     ecx, [esi+3Ch]
0x61542C: call    Actor_IsBlocking; Actor_IsBlocking: process current-action vfunc +0x2D0 equals 6. Player jump path treats this specially; climb activation should reject or require explicit design override while blocking.
0x615431: test    al, al
0x615433: jz      short loc_61543F
0x615435: mov     ecx, [esi+3Ch]; this
0x615438: push    0; shouldBlock
0x61543A: call    Actor_UpdateBlockingState; Starts or stops the actor blocking animation/current-action state and mirrors the result to CombatController byte +0x49. Native ABI is Actor in ECX plus one shouldBlock byte.
0x61543F: fld     dword ptr [esi+44h]
0x615442: fsub    dword ptr [esi+0D4h]
0x615448: fld     dword ptr [esi+0D8h]
0x61544E: fcompp
0x615450: fnstsw  ax
0x615452: test    ah, 5
0x615455: jp      short loc_615474
0x615457: push    ebx
0x615458: mov     ebx, [esi+3Ch]
0x61545B: push    edi
0x61545C: mov     edi, [ebx]
0x61545E: mov     ecx, esi
0x615460: add     edi, 340h
0x615466: call    CombatController_GetCurrentTarget
0x61546B: push    eax
0x61546C: mov     eax, [edi]
0x61546E: mov     ecx, ebx
0x615470: call    eax
0x615472: pop     edi
0x615473: pop     ebx
0x615474: pop     esi
0x615475: retn
