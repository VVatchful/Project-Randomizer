#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char *projects[] = {
        "RESTful API for an E-commerce Store",
        "GraphQL API for a Social Media Platform",
        "Weather Data API Aggregator",
        "Movie Recommendation Engine",
        "Location-based Event Finder",
        "Custom URL Shortener",
        "RESTful API with OAuth2",
        "Sentiment Analysis API",
        "API for Real-time Chat Application",
        "Microservices-based Inventory System",
        "Time Series Database for IoT Data",
        "Data Warehousing Solution",
        "Blockchain-based Transaction System",
        "Full-text Search Engine",
        "Document Storage API",
        "Stream Processing System",
        "File Conversion Service",
        "NoSQL-based E-commerce System",
        "Distributed Database Replication System",
        "ETL System for Big Data",
        "Role-Based Access Control (RBAC) System",
        "JWT Authentication Service",
        "Multi-factor Authentication (MFA) System",
        "OAuth 2.0 Authorization Server",
        "API Rate Limiter",
        "CAPTCHA Verification API",
        "User Activity Tracking System",
        "Password Reset System with Expiry",
        "Encrypted Messaging API",
        "Zero Trust Network Access (ZTNA) API",
        "Kubernetes-based Microservices Orchestration",
        "CI/CD Pipeline for Backend APIs",
        "Load Balancing System with Failover",
        "API Gateway with Rate Limiting",
        "Distributed Caching System",
        "Service Discovery System",
        "Log Aggregation System",
        "Custom Reverse Proxy",
        "Serverless Function Platform",
        "Infrastructure as Code (IaC) System",
        "Throttling and Rate Limiting Middleware",
        "High-performance Caching Layer for APIs",
        "Database Sharding Strategy",
        "Distributed Task Queue System",
        "API Performance Monitoring Tool",
        "WebSocket Scalability with Redis Pub/Sub",
        "Optimizing API Response Time",
        "Horizontal Scaling of Web Servers",
        "Global Content Delivery Network (CDN)",
        "Data Replication and Load Balancing",
        "Real-time Notification System",
        "Real-time Collaborative Editing Platform",
        "Real-time Stock Market Data Stream",
        "Real-time Multiplayer Game Backend",
        "Distributed Message Queue System",
        "Push Notification System",
        "Live Polling Application Backend",
        "Event-driven Microservices Architecture",
        "Real-time Auction Platform",
        "Live Sports Score Update System",
        "Subscription-based Billing System",
        "Microtransactions API",
        "Cryptocurrency Payment Gateway",
        "Fraud Detection System for Transactions",
        "Peer-to-peer Payment System",
        "Split Payment System",
        "Banking API for Transfers and Payments",
        "Loyalty Program with Points",
        "Gift Card API",
        "Crowdfunding Platform Backend",
        "Custom Recommendation System for Products",
        "ElasticSearch-based Search Engine",
        "Personalized Content Delivery System",
        "Location-based Restaurant Recommendation API",
        "Job Search Engine",
        "Machine Learning-based Music Recommendation Engine",
        "Keyword-based Advertising System",
        "Collaborative Filtering for Movies",
        "AI-driven Personal Shopping Assistant",
        "Content Moderation System using AI",
        "Email Campaign Management System",
        "Custom Blogging Platform Backend",
        "Gamification System with Leaderboards",
        "Real-time Traffic Monitoring System",
        "E-learning Platform Backend",
        "Quiz and Assessment System",
        "Multi-tenant SaaS Backend",
        "Social Network Feed Optimization",
        "Affiliate Marketing Platform Backend",
        "Voice Recognition API",
        "Online Code Editor Backend",
        "Content Delivery Network (CDN)",
        "Trivia Game Backend",
        "Video Streaming Backend",
        "Virtual Private Network (VPN) Server",
        "Real-time Fleet Tracking System",
        "Employee Timesheet Management System",
        "Library Management System",
        "Hospital Management Backend",
        "Donation Platform API"
    };

  char *langauges[] = {
    "Go",
    "Rust",
    "C"
  };

  int projectCount = sizeof(projects) / sizeof(projects[0]);
  int langaugeCount = sizeof(langauges) / sizeof(langauges[0]);
  srand(time(NULL));

  int randomIndex = rand() % projectCount;
  int randomLang = rand() % langaugeCount;
  printf("You get project: %s\n", projects[randomIndex]);
  printf("You should try making %s in %s\n", projects[randomIndex], langauges[randomLang]);
  return 0;
}
