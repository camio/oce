SET(TOOLKIT TKXDESTEP)

SET(TOOLKIT_MODULES
	STEPCAFControl
)
SET(TOOLKIT_DEPENDS
	TKMath
	TKernel
	TKXCAF
	TKLCAF
	TKXSBase
	TKSTEPBase
	TKG2d
	TKSTEP
	TKBRep
	TKG3d
	TKCAF
	TKSTEPAttr
	TKCDF
)

INCLUDE(../BuildToolkit.cmake)

