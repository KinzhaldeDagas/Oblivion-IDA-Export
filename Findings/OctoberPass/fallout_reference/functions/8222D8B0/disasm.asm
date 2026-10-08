?RenderDecals@BSShaderAccumulator@@QAAXXZ (.text @ 0x8222d8b0):
8222d8b0  mflr r12, lr
8222d8b4  stw r12, var_8(r1)
8222d8b8  std r31, var_10(r1)
8222d8bc  stfd f30, var_20(r1)
8222d8c0  stfd f31, var_18(r1)
8222d8c4  stwu r1, sender_sp(r1)
8222d8c8  lbz r11, 0x16C(r3)
8222d8cc  mr r31, r3
8222d8d0  cmplwi cr6, r11, 0
8222d8d4  beq cr6, loc_8222D978
8222d8d8  lwz r11, 0x19C(r3)
8222d8dc  cmpwi cr6, r11, 8
8222d8e0  beq cr6, loc_8222D978
8222d8e4  lis r11, _bUseDepthBias_BSShaderManager__2_NA@ha
8222d8e8  lis r10, _fDepthBiasUnit_BSShaderProperty__2MA@ha
8222d8ec  lis r9, __real_00000000@ha
8222d8f0  lbz r8, _bUseDepthBias_BSShaderManager__2_NA@l(r11)
8222d8f4  lfs f31, _fDepthBiasUnit_BSShaderProperty__2MA@l(r10)
8222d8f8  lfs f30, __real_00000000@l(r9)
8222d8fc  cmplwi cr6, r8, 0
8222d900  bne cr6, loc_8222D908
8222d904  fmr f31, f30
8222d908  li r4, 1
8222d90c  li r3, 0
8222d910  bl _SetZWriteEnable_BSRenderState__SAX_NW4BSRENDERSTATE_LOCK___Z
8222d914  li r4, 1
8222d918  fmr f1, f31
8222d91c  bl _SetDepthBias_BSRenderState__SAXMW4BSRENDERSTATE_LOCK___Z
8222d920  li r5, 1
8222d924  li r4, 2
8222d928  mr r3, r31
8222d92c  bl _RenderGeometryGroup_BSShaderAccumulator__QAAXI_N_Z
8222d930  li r5, 1
8222d934  li r4, 3
8222d938  mr r3, r31
8222d93c  bl _RenderGeometryGroup_BSShaderAccumulator__QAAXI_N_Z
8222d940  lis r11, _iLock_BSRenderState__1PAHA@ha
8222d944  li r4, 0
8222d948  addi r31, r11, -0x7EE8 # _iLock_BSRenderState__1PAHA
8222d94c  li r3, 1
8222d950  lwz r11, (_iLock_BSRenderState__1PAHA+4 - 0x83088118)(r31)
8222d954  addi r11, r11, -1
8222d958  stw r11, (_iLock_BSRenderState__1PAHA+4 - 0x83088118)(r31)
8222d95c  bl _SetZWriteEnable_BSRenderState__SAX_NW4BSRENDERSTATE_LOCK___Z
8222d960  lwz r11, (_iLock_BSRenderState__1PAHA+0xC - 0x83088118)(r31)
8222d964  li r4, 0
8222d968  fmr f1, f30
8222d96c  addi r11, r11, -1
8222d970  stw r11, (_iLock_BSRenderState__1PAHA+0xC - 0x83088118)(r31)
8222d974  bl _SetDepthBias_BSRenderState__SAXMW4BSRENDERSTATE_LOCK___Z
8222d978  addi r1, r1, 0x70
8222d97c  lwz r12, var_8(r1)
8222d980  mtlr lr, r12
8222d984  lfd f30, var_20(r1)
8222d988  lfd f31, var_18(r1)
8222d98c  ld r31, var_10(r1)
8222d990  blr lr
