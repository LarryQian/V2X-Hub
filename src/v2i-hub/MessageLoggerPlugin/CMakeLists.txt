PROJECT ( MessageLoggerPlugin VERSION 5.0 LANGUAGES CXX )

SET (TMX_PLUGIN_NAME "MessageLoggerPlugin")

BuildTmxPlugin ( )

TARGET_LINK_LIBRARIES (${PROJECT_NAME} tmxutils)
