0x72BB30: sub     esp, 0BCh
0x72BB36: push    ebx
0x72BB37: push    ebp
0x72BB38: push    esi
0x72BB39: push    edi
0x72BB3A: mov     edi, ecx
0x72BB3C: mov     ecx, [edi+14h]
0x72BB3F: mov     eax, [edi+8]
0x72BB42: mov     edx, [ecx]
0x72BB44: mov     ebx, [eax+44h]
0x72BB47: add     edx, 64h ; 'd'
0x72BB4A: push    edx; transform
0x72BB4B: lea     eax, [ebx+34h]
0x72BB4E: push    eax; input
0x72BB4F: lea     ecx, [esp+0D4h+output]; output
0x72BB53: call    NiBound_TransformInto
0x72BB58: mov     ecx, [edi+8]
0x72BB5B: mov     ebp, [ecx+40h]
0x72BB5E: mov     esi, 1
0x72BB63: cmp     ebp, esi
0x72BB65: jbe     short loc_72BB9C
0x72BB67: add     ebx, 80h ; '€'
0x72BB6D: lea     ecx, [ecx+0]
0x72BB70: mov     edx, [edi+14h]
0x72BB73: mov     eax, [edx+esi*4]
0x72BB76: add     eax, 64h ; 'd'
0x72BB79: push    eax; transform
0x72BB7A: push    ebx; input
0x72BB7B: lea     ecx, [esp+0D4h+var_AC]; output
0x72BB7F: call    NiBound_TransformInto
0x72BB84: lea     ecx, [esp+0CCh+var_AC]
0x72BB88: push    ecx
0x72BB89: lea     ecx, [esp+0D0h+output]
0x72BB8D: call    NiSphere_Merge; Merges a source NiSphere into the destination sphere. Preserves a containing destination, copies a containing source, otherwise computes the minimal enclosing center/radius. NiNode_UpdateDownwardPass uses it to aggregate nonempty child world bounds.
0x72BB92: add     esi, 1
0x72BB95: add     ebx, 4Ch ; 'L'
0x72BB98: cmp     esi, ebp
0x72BB9A: jb      short loc_72BB70
0x72BB9C: mov     ecx, [edi+10h]
0x72BB9F: lea     edx, [esp+0CCh+local]
0x72BBA3: push    edx
0x72BBA4: add     ecx, 64h ; 'd'
0x72BBA7: call    sub_718A80;
0x72BBAC: mov     edi, [edi+8]
0x72BBAF: lea     eax, [esp+0CCh+local]
0x72BBB3: push    eax; local
0x72BBB4: lea     ecx, [esp+0D0h+out]
0x72BBBB: push    ecx; out
0x72BBBC: lea     ecx, [edi+0Ch]; parent
0x72BBBF: call    NiTransform_Compose; Composes parent and local NiTransform into out: out.scale=parent.scale*local.scale; out.rot=parent.rot*local.rot; out.pos=parent.pos + parent.scale*(parent.rot*local.pos). Returns out.
0x72BBC4: mov     esi, eax
0x72BBC6: lea     edx, [esp+0CCh+transform]
0x72BBCA: mov     ecx, 0Dh
0x72BBCF: lea     edi, [esp+0CCh+transform]
0x72BBD3: push    edx; transform
0x72BBD4: lea     eax, [esp+0D0h+output]
0x72BBD8: rep movsd
0x72BBDA: mov     ecx, [esp+0D0h+arg_0]; output
0x72BBE1: push    eax; input
0x72BBE2: call    NiBound_TransformInto
0x72BBE7: pop     edi
0x72BBE8: pop     esi
0x72BBE9: pop     ebp
0x72BBEA: pop     ebx
0x72BBEB: add     esp, 0BCh
0x72BBF1: retn    4
