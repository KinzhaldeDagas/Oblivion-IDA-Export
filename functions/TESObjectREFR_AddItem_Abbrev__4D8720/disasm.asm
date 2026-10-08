0x4D8720: push    ebx; Short TESObjectREFR AddItem wrapper: emits the inventory event and delegates item, ExtraDataList, and count to ContainerExtraData_AddItem.
0x4D8721: push    esi
0x4D8722: mov     esi, ecx
0x4D8724: call    TESObjectREFR_GetContainer
0x4D8729: mov     ebx, eax
0x4D872B: test    ebx, ebx
0x4D872D: jz      short loc_4D875A
0x4D872F: push    edi
0x4D8730: mov     edi, [esp+0Ch+extraList]
0x4D8734: push    1
0x4D8736: push    edi
0x4D8737: push    esi
0x4D8738: call    Script_AddEventToExtraScript
0x4D873D: push    ebx
0x4D873E: push    esi; a1
0x4D873F: call    ContainerExtraData_GetContainerExtraDataForRef
0x4D8744: mov     ecx, [esp+20h+count]
0x4D8748: mov     edx, [esp+20h+item]
0x4D874C: add     esp, 14h
0x4D874F: push    ecx; count
0x4D8750: push    edi; extraList
0x4D8751: push    edx; item
0x4D8752: mov     ecx, eax; this
0x4D8754: call    ContainerExtraData_AddItem; Canonical form-based container add: item, optional instance ExtraDataList, and signed count. All four external callers enter only at this head; the formerly split interior blocks are one logical routine ending in retn 0x0C. A proxy-to-source conversion hook here covers actor-hit/form adds but not ordinary world-reference pickup.
0x4D8759: pop     edi
0x4D875A: pop     esi
0x4D875B: pop     ebx
0x4D875C: retn    0Ch
